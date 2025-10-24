## Clock Signal
set_property PACKAGE_PIN E3 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 10.000 -name clk [get_ports clk]

## CPU Reset (通常はボタンに割り当てることが多い)
# set_property PACKAGE_PIN C18 [get_ports cpu_reset_n] # BTNC (BTN4) をリセットに使う場合
# set_property IOSTANDARD LVCMOS33 [get_ports cpu_reset_n]

## On-board Push Buttons
# BTN0 (通常は左/上)
set_property PACKAGE_PIN D9 [get_ports {btn_in[0]}]
set_property IOSTANDARD LVCMOS33 [get_ports {btn_in[0]}]

# BTN1 (通常は右/下)
set_property PACKAGE_PIN C9 [get_ports {btn_in[1]}]
set_property IOSTANDARD LVCMOS33 [get_ports {btn_in[1]}]

# BTN2 (通常はセレクト/リセット)
set_property PACKAGE_PIN B9 [get_ports {btn_in[2]}]
set_property IOSTANDARD LVCMOS33 [get_ports {btn_in[2]}]

# BTN3 (通常は決定)
set_property PACKAGE_PIN B8 [get_ports {btn_in[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {btn_in[3]}]

## Pmod Header JA - ST7789 Display (SPI 接続を想定)

# SPI Data Out (MOSI)
set_property PACKAGE_PIN G14 [get_ports mosi]
set_property IOSTANDARD LVCMOS33 [get_ports mosi]

# SPI Clock (SCLK)
set_property PACKAGE_PIN G15 [get_ports sclk]
set_property IOSTANDARD LVCMOS33 [get_ports sclk]

# Chip Select (CS_N) - チップセレクト (Low Active)
set_property PACKAGE_PIN J17 [get_ports cs_n]
set_property IOSTANDARD LVCMOS33 [get_ports cs_n]

# Data/Command Select (DC) - データ/コマンド切り替え
set_property PACKAGE_PIN J18 [get_ports dc]
set_property IOSTANDARD LVCMOS33 [get_ports dc]

# Reset (RES_N) - ディスプレイリセット (Low Active)
set_property PACKAGE_PIN K15 [get_ports res_n]
set_property IOSTANDARD LVCMOS33 [get_ports res_n]

# Backlight Control (BL) - バックライト制御 (通常はHighでON)
set_property PACKAGE_PIN H17 [get_ports bl]
set_property IOSTANDARD LVCMOS33 [get_ports bl]
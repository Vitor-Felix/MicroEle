library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;


entity somador_4bit is
port(
  a : in Std_Logic_vector(3 downto 0);
  b : in Std_Logic_vector(3 downto 0);
  c_in : in Std_Logic;  
  --ck : in Std_Logic;  
  s : out Std_Logic_vector(3 downto 0);
  c_out : out Std_Logic;
  vdd : in Std_Logic;
  vss : in Std_Logic
);

end somador_4bit;

architecture comportamental of somador_4bit is

signal soma: Std_Logic_vector(4 downto 0);
--signal ck_aux: Std_Logic;

begin

--ck_aux <= ck; 

soma <= std_logic_vector(a+b+c_in);

s <= soma(3 downto 0);
c_out <= soma(4);
end comportamental;

###
#
#  Sort integer arguments (ascending)
#
###

result = []
ARGV.each do |arg|
  # skip if not integer
  next unless arg =~ /\A-?\d+\z/

  # convert to integer
  i_arg = arg.to_i

  # insert result at the right position
  is_inserted = false
  i = 0
  l = result.size
  while !is_inserted && i < l
    if result[i] < i_arg
      i += 1
    else
      # fix: insert at i (مو i - 1)
      result.insert(i, i_arg)
      is_inserted = true
      break
    end
  end
  # إذا كل اللي قبله أصغر، نحطه في الأخير
  result << i_arg unless is_inserted
end

puts result

cnt=0

while [ $cnt -lt $4 ]
do
	python $1 > input

	python $2 < input > correct_op

	python $3 < input > wrong_op
	
	if ! diff correct_op wrong_op >/dev/null ; then
		gen_input="input_$cnt"
		gen_output_correct="output_"$cnt"_correct"
		gen_output_wrong="output_"$cnt"_wrong"
		cp input $gen_input
		cp correct_op $gen_output_correct
		cp wrong_op $gen_output_wrong
		cnt=`expr $cnt + 1`
	fi
done

rm input
rm correct_op
rm wrong_op

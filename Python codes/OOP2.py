class employee : 
    num_of_emp = 0
    raise_amount = 1.04
    
    def __init__(self,first,last,pay) :
        self.first  = first
        self.last  = last
        self.pay  = pay
        self.email = first + '.' + last + '@company.btu'
        
        employee.num_of_emp += 1
    def Full_name(self) :
        return f'{self.first} {self.last} \nThe pay number is : {self.pay}'

    def apply_raise(self) :
        self.pay = int (self.pay * self.raise_amount)
 
print(employee.num_of_emp)       
employee_one = employee("Omar","Abdo",5000)
employee_two = employee("Ahmed","Mohammed",6000)
print(employee.num_of_emp)  
# print(employee.Full_name(employee_one))
# print(employee_two.Full_name())


employee_one.raise_amount = 1.05
print(employee_one.__dict__)
print(employee.raise_amount)
print(employee_one.raise_amount)
print(employee_two.raise_amount)


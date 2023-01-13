      subroutine compute(array, size)

        integer size,i
        real array(size)
        do i=1,size
         array(i) = sqrt(real(i))
        enddo
        write(*,*) array
      end       

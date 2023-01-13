      subroutine compute(array, size)

        integer size,i

        real array(size)
        do i=1,size
         array(i) = 0
        enddo
        write(*,*) array
      end       

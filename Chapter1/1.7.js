function rotateMatrix90(matrix) {
    for (let r = 0; r < matrix.length; r++) {
        let rowLength = matrix.length;
        for (let c = 0; c < matrix.length; c++) {
            let temp = matrix[rowLength - 1 - r][r];
            matrix[rowLength - 1 - r][r] = matrix[r][c];
            matrix[r][c] = temp;
        }
    }
    return matrix;
}

let matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]];
console.log(rotateMatrix90(matrix));

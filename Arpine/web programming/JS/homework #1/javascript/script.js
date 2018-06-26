$(function() {
    $("#modalForm").modal("show");

    $("#formLogin").submit(function() {
        push();
        $("#modalForm").modal("hide");

        if ($('#male').is(':checked')) {
            $("#checkGender").html("Hi Mr.");
        }

        if ($('#female').is(':checked')) {
            $("#checkGender").html("Hi Mrs.");
        }

        return false;
    });

    $("#headform").submit(function() {
        pushResult();
        return false;
    });
});

function push() {
    $("#hname").html($("#name").val());
    $("#hlname").html($("#lname").val());
}

function info_cart(form_data) {
    var table ="<table ><tr><td> Name: </td> <td>";
    table += form_data["name"].value +
            "</td></tr><tr><td>Surname: </td> <td>"+ form_data["surname"].value +
            "</td></tr><tr><td>Adress: </td> <td>"+ form_data["adress"].value +
            "</td></tr><tr><td>Country: </td> <td>"+ form_data["country"].value +
            "</td></tr><tr><td>Phone: </td> <td>"+ form_data["phone"].value + 
            "</td></tr><tr><td>E-mail: </td> <td>"+ form_data["email"].value + 
            "</td></tr> </table>";
    document.getElementById("container_cart").innerHTML += table;
    for (var i = 0; i < 6; i++) {
        form_data[i].value = "";  
    };
}
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

function pushResult() {
    $("#name2").html($("#name1").val());
    $("#lastname1").html($("#lastname").val());
    $("#address1").html($("#address").val());
    $("#compn1").html($("#compn").val());
    $("#phone1").html($("#phone").val());
    $("#mail1").html($("#mail").val());
}
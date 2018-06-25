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
});

function push() {
    $("#hname").html($("#name").val());
    $("#hlname").html($("#lname").val());
}
$(function() {
    $("#modalForm").modal("show");

    $("#formLogin").submit(function() {
        push();
        $("#modalForm").modal("hide");
        return false;
    });
});

function push() {
    $("#hname").html($("#name").val());
    $("#hlname").html($("#lname").val());
}
function showplyer()
{
    var rs=''
    if(document.getElementById("ch1").checked==true)
    rs=rs+document.getElementById("ch1").value+" "

    if(document.getElementById("ch2").checked==true)
    rs=rs+document.getElementById("ch2").value+" "

    if(document.getElementById("ch3").checked==true)
    rs=rs+document.getElementById("ch3").value+" "

    if(document.getElementById("ch4").checked==true)
    rs=rs+document.getElementById("ch4").value+" "

    if(document.getElementById("ch5").checked==true)
    rs=rs+document.getElementById("ch5").value+" "

    document.getElementById("box").innerText=rs
}
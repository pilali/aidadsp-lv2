function (event) {
    function input_size_changed(input_size_f) {
        var input_size = parseInt(input_size_f);
        // Ensure all param knobs are hidden by default, then show based on input_size
        for (var i = 1; i <= 10; i++) {
            event.icon.find('.conditioned-param-' + i).hide();
        }

        if (input_size >= 2) { // 1 parameter
            event.icon.find('.conditioned-param-1').show();
        }
        if (input_size >= 3) { // 2 parameters
            event.icon.find('.conditioned-param-2').show();
        }
        if (input_size >= 4) { // 3 parameters
            event.icon.find('.conditioned-param-3').show();
        }
        if (input_size >= 5) { // 4 parameters
            event.icon.find('.conditioned-param-4').show();
        }
        if (input_size >= 6) { // 5 parameters
            event.icon.find('.conditioned-param-5').show();
        }
        if (input_size >= 7) { // 6 parameters
            event.icon.find('.conditioned-param-6').show();
        }
        if (input_size >= 8) { // 7 parameters
            event.icon.find('.conditioned-param-7').show();
        }
        if (input_size >= 9) { // 8 parameters
            event.icon.find('.conditioned-param-8').show();
        }
        if (input_size >= 10) { // 9 parameters
            event.icon.find('.conditioned-param-9').show();
        }
        if (input_size >= 11) { // 10 parameters
            event.icon.find('.conditioned-param-10').show();
        }
    }

    if (event.type === 'start') {
        for (var i in event.ports) {
            if (event.ports[i].symbol === 'ModelInSize') {
                input_size_changed(event.ports[i].value);
                break;
            }
        }
    }
    else if (event.symbol === 'ModelInSize') {
        input_size_changed(event.value);
    }
}

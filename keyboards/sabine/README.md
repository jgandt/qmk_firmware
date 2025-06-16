[Created with ryanis.cool/cosmos](https://ryanis.cool/cosmos/beta#cm:CqwBCg8SBRCAPyAnEgASABIAODEKDxIFEIBLICcSABIAEgA4HQodEgUQgFcgJxIAEgASAxCwLxIDELBfOAlAgLSH+AEKGxIFEIBjICcSABIAEgMQsDsSAxCwazgKQIC6GAoVEgUQgG8gJxIAEgASADgeQICSi/ACChgSAiAnEgASBBCgg
AoSAhAwODJAgJKL8AIKDBICICcSABIAEgA4RRgAQOiFoK7wVUjcwK7gAQqPAQorEhMQwIACQICAmAJIwpmglZC8AVBDEhJAgIDMAkjCmaCVkLwBUIYBWDo4CAoVEhAQQECAgCBI0JWA3ZD1A1ALUJ4CCicSEBBAQICA+AFI5pn8p5ALUFcSEUCAgKQDSPCZxLXQMFB0WJUBUH8KA1CCAhgCIgoI0AEQyAEYACAAQMuL/J/QMUitkdy
NwZMGCqYBCg8SBRCAMyAnEgASABIAODIKDxIFEIAnICcSABIAEgA4HgoaEgUQgBsgJxIAEgASABIDELBfOApAgPiG6AEKGBIFEIAPICcSABIAEgASAxCwazgJQIC0JAoVEgUQgAMgJxIAEgASADgdQIDyh8ABChgSAiAnEgASBBCggAoSAhAwODFAgPKHwAEKDBICICcSABIAEgA4RhgBQOeFoK7wVUjcvq7YARiNoAQiAyCaCoIBA
gQCYAJyCEAFUPYEcKAL)

# Compile with
qmk compile -kb sabine -km jgandt -j 8

# Flash with:
qmk flash sabine_jgandt.uf2

# keyboard.json doc reference
https://docs.qmk.fm/reference_info_json

# setting keyboard hand
This only has to be done once and you have done it for both sides already.
You can now flash normally, but this remains as documentation.


I choose to set the handedness in EEProm.
That requires `#define EE_HANDS` in the config.h file


You can flash the hand to the keyboard with:
`qmk flash -kb sabine -km jgandt -bl uf2-split-left`

or the right with 
`qmk flash -kb sabine -km jgandt -bl uf2-split-right`

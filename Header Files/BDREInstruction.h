//
//     Generated by private class-dump
//

@interface BDREInstruction : NSObject {
    unsigned int _instruction;
    id _value;
}

@property (nonatomic) unsigned int instruction;
@property (retain, nonatomic) id value;

+ (id)commandsWithJsonArray:(id)arg0;

- (id)jsonFormat;
- (id)initWithInstruction:(unsigned int)arg0 value:(id)arg1;
- (void).cxx_destruct;
- (id)value;
- (id)initWithDictionary:(id)arg0;
- (id)command;
- (void)setValue:(id)arg0;
- (unsigned int)instruction;
- (void)setInstruction:(unsigned int)arg0;

@end

//
//     Generated by private class-dump
//

@interface IESLiveIMCustomMessageDecoder : IESLiveIMPayloadDecoder {
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;

- (void)logEvent:(id)arg0 params:(id)arg1;
- (void)decode:(id)arg0 completion:(id /* block */)arg1;
- (id)transformValue:(id)arg0 withExtra:(id)arg1;
- (id)init;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end

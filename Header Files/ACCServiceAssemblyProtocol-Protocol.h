//
//     Generated by private class-dump
//

@protocol ACCServiceAssemblyProtocol <NSObject>

@property (nonatomic) unsigned long long assembleStage;
@property (nonatomic) BOOL hasAssembled;

- (void)setAssembleStage:(unsigned long long)arg0;
- (void)assembleWithContainer:(id)arg0;
- (void)containerLoaded:(id)arg0;
- (unsigned long long)assembleStage;
- (BOOL)hasAssembled;
- (void)setHasAssembled:(BOOL)arg0;

@end
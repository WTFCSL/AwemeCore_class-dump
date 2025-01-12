//
//     Generated by private class-dump
//

@protocol TTVideoEngineEventLoggerDelegate;

@protocol TTVideoEngineEventOneAVRenderCheckProtocol <NSObject>

@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;

- (void)noVARenderStart:(long long)arg0 noRenderType:(int)arg1 extraInfo:(id)arg2;
- (void)noVARenderStart:(long long)arg0 noRenderType:(int)arg1;
- (id)noVARenderEnd:(long long)arg0 endType:(id)arg1 noRenderType:(int *)arg2;
- (id)initWithEventBase:(id)arg0;
- (void)setEnableMDL:(long long)arg0;
- (void)setValue:(id)arg0 WithKey:(long long)arg1;
- (void)onAVBadInterlaced;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end

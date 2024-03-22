//
//     Generated by private class-dump
//

@protocol IVCABRModule;

@interface _TTVideoEngineStartUpSelector : NSObject {
    int _scene;
    id<IVCABRModule> _abrModule;
}

@property (retain, nonatomic) id<IVCABRModule> abrModule;
@property (nonatomic) int scene;

+ (long long)convertToABRNetworkState:(long long)arg0;

- (void)setAbrModule:(id)arg0;
- (id)abrModule;
- (id)initWithScene:(int)arg0 PredictType:(long long)arg1;
- (id)selectWithPlaySource:(id)arg0 params:(id)arg1 onceAlgoType:(int)arg2 isAddBufferInfo:(BOOL)arg3;
- (void)setScene:(int)arg0;
- (void).cxx_destruct;
- (int)scene;

@end
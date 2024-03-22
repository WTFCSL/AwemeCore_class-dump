//
//     Generated by private class-dump
//

@protocol DTFFaceViewProtocol;

@interface APBToygerPresentTask : APBToygerBaseTask {
    id<DTFFaceViewProtocol> _faceView;
}

@property (retain, nonatomic) id<DTFFaceViewProtocol> faceView;

- (void)_checkAuth;
- (void)invokeWithPipeInfo:(id)arg0;
- (void)processEvent:(id)arg0 withCompletionCallback:(id /* block */)arg1;
- (void).cxx_destruct;
- (void)presentAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)faceView;
- (void)setFaceView:(id)arg0;

@end

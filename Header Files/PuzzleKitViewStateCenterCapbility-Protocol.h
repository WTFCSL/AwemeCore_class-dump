//
//     Generated by private class-dump
//

@protocol PuzzleKitViewStateCenterCapbility <NSObject>

@property (copy, nonatomic) id /* block */ updateStateHandler;

- (id /* block */)updateStateHandler;
- (void)updateRegisterKeys:(id)arg0 layeredKeys:(id)arg1;
- (void)unregisterKeys:(id)arg0 layeredKeys:(id)arg1;
- (id)currentStateWithKeys:(id)arg0 layerKeys:(id)arg1;
- (BOOL)canHandleKey:(id)arg0;
- (void)setUpdateStateHandler:(id /* block */)arg0;

@end

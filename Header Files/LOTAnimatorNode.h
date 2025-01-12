//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LOTBezierPath, NSNumber;

@interface LOTAnimatorNode : NSObject {
    BOOL _pathShouldCacheLengths;
    NSDictionary *_valueInterpolators;
    NSString *_keyname;
    NSNumber *_currentFrame;
    LOTAnimatorNode *_inputNode;
    LOTBezierPath *_localPath;
    LOTBezierPath *_outputPath;
}

@property (readonly, nonatomic) NSDictionary *valueInterpolators;
@property (readonly, nonatomic) NSString *keyname;
@property (readonly, nonatomic) NSNumber *currentFrame;
@property (readonly, nonatomic) LOTAnimatorNode *inputNode;
@property (retain, nonatomic) LOTBezierPath *localPath;
@property (retain, nonatomic) LOTBezierPath *outputPath;
@property (nonatomic) BOOL pathShouldCacheLengths;

- (BOOL)updateWithFrame:(id)arg0 withModifierBlock:(id /* block */)arg1 forceLocalUpdate:(BOOL)arg2;
- (BOOL)needsUpdateForFrame:(id)arg0;
- (id)keyname;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)setPathShouldCacheLengths:(BOOL)arg0;
- (void)searchNodesForKeypath:(id)arg0;
- (id)valueInterpolators;
- (void)setValueDelegate:(id)arg0 forKeypath:(id)arg1;
- (id)initWithInputNode:(id)arg0 keyName:(id)arg1;
- (void)forceSetCurrentFrame:(id)arg0;
- (BOOL)pathShouldCacheLengths;
- (id)inputNode;
- (void).cxx_destruct;
- (id)currentFrame;
- (id)localPath;
- (BOOL)updateWithFrame:(id)arg0;
- (id)outputPath;
- (void)setOutputPath:(id)arg0;
- (void)logString:(id)arg0;
- (void)setLocalPath:(id)arg0;

@end

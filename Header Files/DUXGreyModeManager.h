//
//     Generated by private class-dump
//

@class NSPointerArray, NSMutableSet, NSMapTable;

@interface DUXGreyModeManager : NSObject {
    BOOL _greyModeEnable;
    BOOL _globelGreyMode;
    BOOL _commonViewShouldGrey;
    long long _greyModeType;
    unsigned long long _comsumeContent;
    NSMutableSet *_contentSet;
    double _greyModeStartTime;
    double _greyModeEndTime;
    double _greyModeSaturation;
    NSPointerArray *_greyNodes;
    NSPointerArray *_windowAffectGreyNodes;
    NSPointerArray *_greyWindowNodes;
    NSMapTable *_greyRootViewMapTable;
    NSMapTable *_greyRootWindowMapTable;
}

@property (nonatomic) BOOL greyModeEnable;
@property (nonatomic) long long greyModeType;
@property (nonatomic) unsigned long long comsumeContent;
@property (retain, nonatomic) NSMutableSet *contentSet;
@property (nonatomic) BOOL globelGreyMode;
@property (nonatomic) double greyModeStartTime;
@property (nonatomic) double greyModeEndTime;
@property (nonatomic) double greyModeSaturation;
@property (retain, nonatomic) NSPointerArray *greyNodes;
@property (retain, nonatomic) NSPointerArray *windowAffectGreyNodes;
@property (nonatomic) BOOL commonViewShouldGrey;
@property (retain, nonatomic) NSPointerArray *greyWindowNodes;
@property (retain, nonatomic) NSMapTable *greyRootViewMapTable;
@property (retain, nonatomic) NSMapTable *greyRootWindowMapTable;

+ (id)sharedManager;

- (void)setGreyRootView:(id)arg0 withFunctionalMode:(id)arg1;
- (BOOL)greyModeEnable;
- (void)contentWillComsume:(id)arg0 withFunctionalMode:(id)arg1;
- (long long)greyModeType;
- (void)windowAndWindowAffectViewShouldGrey:(BOOL)arg0;
- (void)setGreyNode:(id)arg0 withFunctionalMode:(id)arg1;
- (void)setBlackNode:(id)arg0 withFunctionalMode:(id)arg1;
- (void)setGreyModeConfig;
- (void)setAllNodes;
- (unsigned long long)comsumeContent;
- (BOOL)checkGreyRootWindowIsKeyWindow;
- (BOOL)checkGreyRootViewWindow;
- (id)contentSet;
- (void)setGreyModeEnable:(BOOL)arg0;
- (void)cleanAllNodes;
- (id)greyRootViewMapTable;
- (void)setGreyRootViewGreyModeAndWindow:(id)arg0;
- (id)greyRootWindowMapTable;
- (long long)duxGreyModeTypeWithView:(id)arg0;
- (BOOL)commonViewShouldGrey;
- (void)setGreyModeInView:(id)arg0;
- (void)resetGreyModeInView:(id)arg0;
- (id)greyWindowNodes;
- (void)setDuxGreyModeType:(long long)arg0 withView:(id)arg1;
- (BOOL)p_removeObject:(id)arg0 withPointerArray:(id)arg1;
- (id)greyNodes;
- (id)windowAffectGreyNodes;
- (void)backNodeToSetAffectSubviewNode:(id)arg0;
- (void)setWindowAffectGreyNode:(id)arg0;
- (void)setAffectSubviewNode:(id)arg0 withTargetView:(id)arg1;
- (void)setGreyNodes:(id)arg0;
- (void)setGreyWindowNodes:(id)arg0;
- (void)setWindowAffectGreyNodes:(id)arg0;
- (void)setGreyRootViewMapTable:(id)arg0;
- (void)setGreyRootWindowMapTable:(id)arg0;
- (id)checkBlackNodeSuperGreyNodeView:(id)arg0;
- (id)checkBlackNodeSuperAffectSubviewNodeView:(id)arg0;
- (void)setCommonViewShouldGrey:(BOOL)arg0;
- (void)updateWindowGreyNodeStatus:(BOOL)arg0;
- (void)updateWindowAffectGreyNodeStatus:(BOOL)arg0;
- (double)greyModeSaturation;
- (void)setGreyModeInLayer:(id)arg0 withSaturation:(double)arg1;
- (void)setGlobelGreyMode:(BOOL)arg0;
- (void)setGreyModeStartTime:(double)arg0;
- (void)setGreyModeEndTime:(double)arg0;
- (void)setGreyModeSaturation:(double)arg0;
- (void)setGreyModeType:(long long)arg0;
- (void)setComsumeContent:(unsigned long long)arg0;
- (void)setContentSet:(id)arg0;
- (BOOL)globelGreyMode;
- (double)greyModeStartTime;
- (double)greyModeEndTime;
- (void)setWindowGreyNode:(id)arg0;
- (void)resetWindowGreyNode:(id)arg0;
- (void)resetGreyNode:(id)arg0;
- (void)resetWindowAffectGreyNode:(id)arg0;
- (void)resetBlackNode:(id)arg0;
- (void).cxx_destruct;

@end

//
//     Generated by private class-dump
//

@class IESLiveStreamUnifyLayoutContext, NSMutableDictionary, NSString;
@protocol IESLiveDebugService, IESLiveStreamUnifyLayoutPlayer;

@interface IESLiveStreamUnifyBaseLayoutMachine : NSObject <IESLiveStreamUnifyLayoutMachine> {
    IESLiveStreamUnifyLayoutContext *_context;
    id<IESLiveDebugService> _debugService;
    id<IESLiveStreamUnifyLayoutPlayer> _player;
    NSMutableDictionary *_layoutImpDict;
    unsigned long long _previousType;
}

@property (retain, nonatomic) IESLiveStreamUnifyLayoutContext *context;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;
@property (weak, nonatomic) id<IESLiveStreamUnifyLayoutPlayer> player;
@property (retain, nonatomic) NSMutableDictionary *layoutImpDict;
@property (nonatomic) unsigned long long previousType;
@property (readonly, nonatomic) unsigned long long currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)layoutImpDict;
- (id)customLayouts;
- (id)supportSEILayoutTypes;
- (void)clearPreviousPlayerLayoutParams;
- (BOOL)layoutWithMetaInfo:(id)arg0;
- (void)layoutWithVideoSize:(struct CGSize { double x0; double x1; })arg0 containerView:(id)arg1;
- (void)layoutWithType:(unsigned long long)arg0;
- (void)updateRoomModel:(id)arg0;
- (void)setDebugService:(id)arg0;
- (id)debugService;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameWithLayoutType:(unsigned long long)arg0;
- (id)layoutClassNameInType:(unsigned long long)arg0;
- (id)layoutImpWithRoomScene:(long long)arg0;
- (void)p_layoutWithImpObj:(id)arg0;
- (id)commonLayouts;
- (id)supportedLayouts;
- (BOOL)p_shouldUseLayoutForKey:(id)arg0 withRoomScene:(long long)arg1;
- (void)p_resiterAllLayouts;
- (id)p_registerLayoutImpWithClass:(Class)arg0 type:(unsigned long long)arg1;
- (void)setLayoutImpDict:(id)arg0;
- (unsigned long long)currentLayout;
- (unsigned long long)previousType;
- (void)setPreviousType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setPlayer:(id)arg0;
- (id)context;
- (id)player;
- (id)initWithPlayer:(id)arg0 context:(id)arg1;

@end
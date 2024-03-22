//
//     Generated by private class-dump
//

@class IESLiveStreamUnifyLayoutContext, NSString, IESLiveStreamPlayerLayoutMachine, IESLiveStreamUnifyBaseLayoutMachine;
@protocol IESLiveStreamUnifyLayoutPlayer;

@interface IESLiveStreamPlayerLayoutBase : NSObject <IESLiveStreamPlayerLayout, IESLiveStreamUnifyLayout> {
    IESLiveStreamPlayerLayoutMachine *_layoutMachine;
    unsigned long long _layoutType;
    id<IESLiveStreamUnifyLayoutPlayer> _player;
    IESLiveStreamUnifyBaseLayoutMachine *_unifyLayoutMachine;
}

@property (readonly, weak, nonatomic) IESLiveStreamPlayerLayoutMachine *layoutMachine;
@property (nonatomic) unsigned long long layoutType;
@property (readonly, weak, nonatomic) IESLiveStreamUnifyBaseLayoutMachine *unifyLayoutMachine;
@property (readonly, weak, nonatomic) id<IESLiveStreamUnifyLayoutPlayer> player;
@property (readonly, nonatomic) IESLiveStreamUnifyLayoutContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutMachine;
- (BOOL)layoutWithMetaInfo:(id)arg0;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)arg0;
- (id)unifyLayoutMachine;
- (id)initWithPlayer:(id)arg0 layoutMachine:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mainBounds;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (id)context;
- (void)dealloc;
- (id)player;

@end

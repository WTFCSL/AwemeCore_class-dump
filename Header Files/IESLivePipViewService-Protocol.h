//
//     Generated by private class-dump
//

@protocol IESLivePipViewDelegate;

@protocol IESLivePipViewService <NSObject>

@property (weak, nonatomic) id<IESLivePipViewDelegate> delegate;
@property (nonatomic) BOOL enableAttach;

- (BOOL)enableAttach;
- (void)setEnableAttach:(BOOL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)updateWithModel:(id)arg0;

@optional

- (void)atachWindow;
- (id)extraParamForTrackType:(unsigned long long)arg0 entranceTypeIfNeeded:(unsigned long long)arg1 closeWithHideTypeIfNeeded:(long long)arg2;

@end

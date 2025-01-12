//
//     Generated by private class-dump
//

@class AWENearbyDistanceAnimationContentView, NSString;

@interface AWENearbyDistanceAnimationView : UIView <AWENearbyDistanceAnimationViewProtocol> {
    AWENearbyDistanceAnimationContentView *_firstContentView;
    AWENearbyDistanceAnimationContentView *_secondContentView;
    unsigned long long _status;
}

@property (retain, nonatomic) AWENearbyDistanceAnimationContentView *firstContentView;
@property (retain, nonatomic) AWENearbyDistanceAnimationContentView *secondContentView;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__buildUI;
- (void)updateDistance:(id)arg0;
- (id)firstContentView;
- (id)secondContentView;
- (BOOL)__shouldUpdateWithText:(id)arg0;
- (void)setFirstContentView:(id)arg0;
- (void)setSecondContentView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setStatus:(unsigned long long)arg0;

@end

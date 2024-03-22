//
//     Generated by private class-dump
//

@class AWEBaseElement, AWEPlayInteractionElementMaskView;

@interface AWEPlayInteractionElementMaskController : AWEPlayInteractionBaseController {
    BOOL _authorElementDidLayout;
    BOOL _descElementDidLayout;
    BOOL _didCalculateElementMaskType;
    BOOL _isTexture;
    BOOL _isWhite;
    AWEPlayInteractionElementMaskView *_maskMainView;
    AWEBaseElement *_authorElement;
    double _leftHightPercent;
    unsigned long long _maskType;
}

@property (retain, nonatomic) AWEPlayInteractionElementMaskView *maskMainView;
@property (weak, nonatomic) AWEBaseElement *authorElement;
@property (nonatomic) BOOL authorElementDidLayout;
@property (nonatomic) BOOL descElementDidLayout;
@property (nonatomic) BOOL didCalculateElementMaskType;
@property (nonatomic) BOOL isTexture;
@property (nonatomic) BOOL isWhite;
@property (nonatomic) double leftHightPercent;
@property (nonatomic) unsigned long long maskType;

- (void)setHide:(BOOL)arg0;
- (id)authorElement;
- (void)setAuthorElement:(id)arg0;
- (void)setAuthorElementDidLayout:(BOOL)arg0;
- (void)setDescElementDidLayout:(BOOL)arg0;
- (void)hiddenElementMask;
- (void)setDidCalculateElementMaskType:(BOOL)arg0;
- (void)setIsTexture:(BOOL)arg0;
- (void)setIsWhite:(BOOL)arg0;
- (void)setUpMaskViewIfNeed;
- (void)playInteractionDescriptionDidClickExpand:(id)arg0;
- (BOOL)authorElementDidLayout;
- (BOOL)descElementDidLayout;
- (void)calculateElementMaskType;
- (void)setUpMaskView;
- (void)showElementMaskWhite;
- (id)maskMainView;
- (void)showElementMaskTexture;
- (BOOL)didCalculateElementMaskType;
- (void)trackVideoMaskType;
- (void)setLeftHightPercent:(double)arg0;
- (BOOL)enableInteractionMaskTexture;
- (double)leftHightPercent;
- (void)setMaskMainView:(id)arg0;
- (BOOL)isWhite;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (unsigned long long)maskType;
- (void)setMaskType:(unsigned long long)arg0;
- (BOOL)isTexture;

@end

//
//     Generated by private class-dump
//

@class AWEConcernCardModel;

@interface AWEFriendStyleCommentBaseCellFrame : NSObject {
    AWEConcernCardModel *_cardModel;
    unsigned long long _displayStyle;
    unsigned long long _browsedType;
    double _containerWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (weak, nonatomic) AWEConcernCardModel *cardModel;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) unsigned long long browsedType;
@property (nonatomic) double containerWidth;

- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (unsigned long long)browsedType;
- (double)commentInnerLeftMargin;
- (void)calculateLayoutWithContainerWidth:(double)arg0;
- (double)commentInnerRightMargin;
- (id)tranferToRouterWithUserId:(id)arg0;
- (void)setBrowsedType:(unsigned long long)arg0;
- (void)configWithCardModel:(id)arg0 containerWidth:(double)arg1 displayStyle:(unsigned long long)arg2;
- (id)init;
- (void)setDisplayStyle:(unsigned long long)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (unsigned long long)displayStyle;
- (double)cellHeight;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;

@end

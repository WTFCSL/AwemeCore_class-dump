//
//     Generated by private class-dump
//

@class NSString;

@interface QuotedView : UIView {
    void /* unknown type, empty encoding */ cellConfig;
    void /* unknown type, empty encoding */ cellHelper;
    void /* unknown type, empty encoding */ itemUserID;
    void /* unknown type, empty encoding */ quotedReplyName;
    void /* unknown type, empty encoding */ quotedDisplayAttrContent;
    void /* unknown type, empty encoding */ quotedTagType;
    void /* unknown type, empty encoding */ quotedTagText;
    void /* unknown type, empty encoding */ replyUserTappedBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyAuthorTagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyFollowerOrNearbyTagLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_replyCommentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verticalLayer;
}

@property (nonatomic, copy) NSString *quotedReplyName;
@property (nonatomic, retain) void /* unknown type, empty encoding */ quotedDisplayAttrContent;
@property (nonatomic) void /* unknown type, empty encoding */ quotedTagType;
@property (nonatomic, copy) NSString *quotedTagText;

- (id)quotedReplyName;
- (void)setQuotedReplyName:(id)arg0;
- (id)quotedDisplayAttrContent;
- (void)setQuotedDisplayAttrContent:(id)arg0;
- (long long)quotedTagType;
- (void)setQuotedTagType:(long long)arg0;
- (id)quotedTagText;
- (void)setQuotedTagText:(id)arg0;
- (void)replyUserTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)layoutSubviews;

@end
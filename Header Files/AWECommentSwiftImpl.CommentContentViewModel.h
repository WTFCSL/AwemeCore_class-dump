//
//     Generated by private class-dump
//

@interface AWECommentSwiftImpl.CommentContentViewModel : NSObject <AWECommentContentViewModelProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ expanded;
    void /* unknown type, empty encoding */ changed;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ truncationToken;
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic) BOOL isColorWhite;
@property (nonatomic) void /* unknown type, empty encoding */ expanded;

- (void)setIsColorWhite:(BOOL)arg0;
- (id)buildIfNeeded;
- (BOOL)isColorWhite;
- (BOOL)expanded;
- (id)init;
- (void).cxx_destruct;
- (id)build;
- (void)setExpanded:(BOOL)arg0;
- (double)calculateHeight;

@end

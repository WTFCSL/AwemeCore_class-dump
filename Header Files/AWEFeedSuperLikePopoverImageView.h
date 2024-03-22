//
//     Generated by private class-dump
//

@class NSString, UIImage, UIColor;

@interface AWEFeedSuperLikePopoverImageView : NSObject <DUXPopoverContent> {
    NSString *_text;
    UIImage *_image;
    UIColor *_contentColor;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)initWithText:(id)arg0 image:(id)arg1;
- (id)contentColor;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setContentColor:(id)arg0;
- (id)text;

@end
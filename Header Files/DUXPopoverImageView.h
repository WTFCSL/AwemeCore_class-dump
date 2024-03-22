//
//     Generated by private class-dump
//

@class NSString, UIImage, UIColor;

@interface DUXPopoverImageView : NSObject <DUXPopoverContent> {
    BOOL _showIcon;
    unsigned long long _style;
    NSString *_text;
    UIImage *_image;
    UIColor *_contentColor;
}

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) BOOL showIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (id)initWithStyle:(unsigned long long)arg0 text:(id)arg1 image:(id)arg2 showIcon:(BOOL)arg3;
- (id)contentColor;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (void)setImage:(id)arg0;
- (void)setContentColor:(id)arg0;
- (id)text;
- (void)setStyle:(unsigned long long)arg0;
- (BOOL)showIcon;
- (void)setShowIcon:(BOOL)arg0;

@end
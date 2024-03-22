//
//     Generated by private class-dump
//

@class NSString, UIImage, AWENearbyFeedbackItemDetail;

@interface AWENearbyFeedbackItem : NSObject {
    NSString *_title;
    UIImage *_iconImage;
    AWENearbyFeedbackItemDetail *_detailItem;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) AWENearbyFeedbackItemDetail *detailItem;

- (id)initWithTitle:(id)arg0 iconImage:(id)arg1 detail:(id)arg2;
- (id)iconImage;
- (void).cxx_destruct;
- (id)title;
- (void)setIconImage:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)detailItem;
- (void)setDetailItem:(id)arg0;

@end

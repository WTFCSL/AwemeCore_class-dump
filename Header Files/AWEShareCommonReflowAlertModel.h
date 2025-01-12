//
//     Generated by private class-dump
//

@class NSString, UIImage, NSDictionary;

@interface AWEShareCommonReflowAlertModel : NSObject {
    NSString *_title;
    NSString *_descTitle;
    NSString *_openBtnText;
    UIImage *_headImage;
    id /* block */ _openAction;
    id /* block */ _cancelAction;
    id /* block */ _reportAction;
    NSDictionary *_trackParams;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descTitle;
@property (copy, nonatomic) NSString *openBtnText;
@property (retain, nonatomic) UIImage *headImage;
@property (copy, nonatomic) id /* block */ openAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ reportAction;
@property (copy, nonatomic) NSDictionary *trackParams;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (id /* block */)reportAction;
- (void)setReportAction:(id /* block */)arg0;
- (id)headImage;
- (void)setHeadImage:(id)arg0;
- (void)setDescTitle:(id)arg0;
- (id)descTitle;
- (id)openBtnText;
- (void)setOpenBtnText:(id)arg0;
- (id /* block */)openAction;
- (void)setOpenAction:(id /* block */)arg0;
- (void)setCancelAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)title;
- (id /* block */)cancelAction;
- (void)setTitle:(id)arg0;

@end

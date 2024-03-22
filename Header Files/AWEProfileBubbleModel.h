//
//     Generated by private class-dump
//

@class UIImage, NSString, NSDictionary;

@interface AWEProfileBubbleModel : NSObject <AWEProfileBubbleModelProtocol> {
    NSString *content;
    UIImage *leftImage;
    NSDictionary *customInfo;
    NSString *linkString;
}

@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *linkString;
@property (retain, nonatomic) NSDictionary *customInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)linkString;
- (void)setLinkString:(id)arg0;
- (id)customInfo;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setCustomInfo:(id)arg0;
- (id)leftImage;
- (void)setLeftImage:(id)arg0;

@end
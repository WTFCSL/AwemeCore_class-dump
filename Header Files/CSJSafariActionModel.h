//
//     Generated by private class-dump
//

@class NSString;

@interface CSJSafariActionModel : NSObject <CSJActionWebModel> {
    NSString *AdTitle;
    NSString *_targetURL;
}

@property (copy, nonatomic) NSString *targetURL;
@property (copy, nonatomic) NSString *AdTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithURL:(id)arg0;

- (void)setAdTitle:(id)arg0;
- (id)AdTitle;
- (void).cxx_destruct;
- (id)initWithString:(id)arg0;
- (id)targetURL;
- (void)setTargetURL:(id)arg0;

@end

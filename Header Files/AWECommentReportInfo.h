//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentReportInfo : MTLModel <MTLJSONSerializing> {
    NSString *_toast;
}

@property (copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setToast:(id)arg0;
- (id)toast;

@end

//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUserDialogButtonModel : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    NSString *_gotoUrl;
}

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *gotoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)gotoUrl;
- (void)setGotoUrl:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;

@end

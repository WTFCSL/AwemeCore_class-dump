//
//     Generated by private class-dump
//

@class NSString;

@interface AWELivePrivilegeUrl : AWEBaseApiModel {
    NSString *_privilegePanelSchema;
    NSString *_privilegeCardSchema;
}

@property (copy, nonatomic) NSString *privilegePanelSchema;
@property (copy, nonatomic) NSString *privilegeCardSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)privilegePanelSchema;
- (void)setPrivilegePanelSchema:(id)arg0;
- (id)privilegeCardSchema;
- (void)setPrivilegeCardSchema:(id)arg0;
- (void).cxx_destruct;

@end

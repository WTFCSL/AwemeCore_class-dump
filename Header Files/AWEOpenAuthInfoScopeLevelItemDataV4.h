//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEOpenAuthInfoScopeLevelItemDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoScopeLevelItemDataProtocol> {
    BOOL canSkipConfirm;
    BOOL hideScopeDesc;
    BOOL canUserSelect;
    BOOL canShowAccount;
    NSArray *content;
    NSString *desc;
    NSString *buttonText;
    NSDictionary *noAuthScope;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *content;
@property (nonatomic) BOOL canSkipConfirm;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hideScopeDesc;
@property (nonatomic) BOOL canUserSelect;
@property (nonatomic) BOOL canShowAccount;
@property (copy, nonatomic) NSDictionary *noAuthScope;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canSkipConfirm;
- (void)setCanSkipConfirm:(BOOL)arg0;
- (BOOL)hideScopeDesc;
- (void)setHideScopeDesc:(BOOL)arg0;
- (BOOL)canUserSelect;
- (void)setCanUserSelect:(BOOL)arg0;
- (BOOL)canShowAccount;
- (void)setCanShowAccount:(BOOL)arg0;
- (id)noAuthScope;
- (void)setNoAuthScope:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (id)buttonText;
- (void)setDesc:(id)arg0;
- (void)setButtonText:(id)arg0;

@end

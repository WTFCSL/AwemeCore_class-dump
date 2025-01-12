//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEDislikeDynamicReasonInfo : AWEBaseApiModel {
    BOOL _showSep;
    NSString *_buttonType;
    NSString *_text;
    AWEURLModel *_iconURL;
    NSString *_clientAnchorExtra;
    NSString *_serverAnchorExtra;
    NSString *_defaultImageName;
    unsigned long long _selectedType;
}

@property (copy, nonatomic) NSString *buttonType;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *clientAnchorExtra;
@property (copy, nonatomic) NSString *serverAnchorExtra;
@property (nonatomic) BOOL showSep;
@property (copy, nonatomic) NSString *defaultImageName;
@property (nonatomic) unsigned long long selectedType;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)clientAnchorExtra;
- (void)setClientAnchorExtra:(id)arg0;
- (id)serverAnchorExtra;
- (void)setServerAnchorExtra:(id)arg0;
- (BOOL)showSep;
- (void)setShowSep:(BOOL)arg0;
- (void)setSelectedType:(unsigned long long)arg0;
- (id)buttonType;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)text;
- (void)setButtonType:(id)arg0;
- (unsigned long long)selectedType;
- (id)defaultImageName;
- (void)setDefaultImageName:(id)arg0;

@end

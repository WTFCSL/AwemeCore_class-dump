//
//     Generated by private class-dump
//

@class NSString, NSArray, NSNumber;

@interface BDXBridgeGetHistoryMethodParamModel : BDXBridgeModel {
    NSString *_enterForm;
    NSString *_enterFromSecond;
    NSString *_searchStyle;
    NSString *_userID;
    NSString *_historyKey;
    NSArray *_includeTypeList;
    NSArray *_excludeTypeList;
    NSNumber *_maxNumber;
    NSNumber *_historyType;
}

@property (copy, nonatomic) NSString *enterForm;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *searchStyle;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *historyKey;
@property (copy, nonatomic) NSArray *includeTypeList;
@property (copy, nonatomic) NSArray *excludeTypeList;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSNumber *historyType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)enterFromSecond;
- (void)setEnterFromSecond:(id)arg0;
- (void)setSearchStyle:(id)arg0;
- (id)searchStyle;
- (id)includeTypeList;
- (void)setIncludeTypeList:(id)arg0;
- (id)excludeTypeList;
- (void)setExcludeTypeList:(id)arg0;
- (id)enterForm;
- (id)historyKey;
- (void)setEnterForm:(id)arg0;
- (void)setHistoryKey:(id)arg0;
- (void)setHistoryType:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (id)maxNumber;
- (void)setMaxNumber:(id)arg0;
- (id)historyType;

@end

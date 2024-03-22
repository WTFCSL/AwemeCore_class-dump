//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEHotSearchBoardTabModel : MTLModel <MTLJSONSerializing> {
    BOOL _shouldHideListAndSubTitle;
    unsigned long long _boardType;
    NSString *_boardSubType;
    NSString *_tabName;
    NSString *_tabHeaderName;
    AWEURLModel *_icon;
}

@property (nonatomic) unsigned long long entryWordType;
@property (nonatomic) unsigned long long boardType;
@property (copy, nonatomic) NSString *boardSubType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabHeaderName;
@property (nonatomic) BOOL shouldHideListAndSubTitle;
@property (retain, nonatomic) AWEURLModel *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefaultInstance;
+ (id)boardTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tabHeaderName;
- (unsigned long long)boardType;
- (unsigned long long)entryWordType;
- (BOOL)shouldHideListAndSubTitle;
- (void)setShouldHideListAndSubTitle:(BOOL)arg0;
- (void)setTabHeaderName:(id)arg0;
- (void)setBoardType:(unsigned long long)arg0;
- (id)boardSubType;
- (void)setBoardSubType:(id)arg0;
- (void)setEntryWordType:(unsigned long long)arg0;
- (id)headerIconName;
- (void)initCallBack;
- (id)icon;
- (id)init;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (void)setTabName:(id)arg0;
- (id)tabName;

@end

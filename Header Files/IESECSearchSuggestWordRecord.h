//
//     Generated by private class-dump
//

@class NSString;

@interface IESECSearchSuggestWordRecord : MTLModel <MTLJSONSerializing> {
    NSString *_groupID;
    NSString *_wordsContent;
    NSString *_wordsSource;
}

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *wordsContent;
@property (copy, nonatomic) NSString *wordsSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)wordsContent;
- (void)setWordsContent:(id)arg0;
- (id)wordsSource;
- (void)setWordsSource:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;

@end

//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWERepoSearchClueModel : NSObject <NSCopying, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepoSearchClueModelProtocol> {
    NSString *_clueID;
    NSArray *_extraPublishTagNames;
}

@property (copy, nonatomic) NSString *clueID;
@property (copy, nonatomic) NSArray *extraPublishTagNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)acc_publishTrackEventParams:(id)arg0;
- (void)setClueID:(id)arg0;
- (void)setExtraPublishTagNames:(id)arg0;
- (id)clueID;
- (id)extraPublishTagNames;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
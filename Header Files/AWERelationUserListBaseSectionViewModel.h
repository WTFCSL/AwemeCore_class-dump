//
//     Generated by private class-dump
//

@class NSString;

@interface AWERelationUserListBaseSectionViewModel : AWEBaseListSectionViewModel

@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) BOOL isFriends;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *enterFrom;

- (void)setupViewModel;
- (id)enterFrom;
- (void)appendModels:(id)arg0;
- (void)replaceByModels:(id)arg0;
- (void)insertModel:(id)arg0 atIndex:(long long)arg1;
- (void)updateByModels:(id)arg0;
- (void)appendModels:(id)arg0 animated:(BOOL)arg1;
- (void)insertModel:(id)arg0 atIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)replaceByModels:(id)arg0 animated:(BOOL)arg1;
- (void)updateByModels:(id)arg0 animated:(BOOL)arg1;
- (BOOL)isFriends;
- (id)convertUserModel:(id)arg0;
- (id)convertUserModelsArray:(id)arg0;
- (long long)type;
- (BOOL)isMine;

@end

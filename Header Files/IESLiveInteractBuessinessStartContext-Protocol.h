//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESLiveInteractionLayout;

@protocol IESLiveInteractBuessinessStartContext <NSObject>

@property (retain, nonatomic) IESLiveInteractionLayout *startLayout;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long startType;

- (void)setExtra:(id)arg0;
- (id)createSource;
- (void)setCreateSource:(id)arg0;
- (long long)startType;
- (void)setStartType:(long long)arg0;
- (long long)maxMcNum;
- (BOOL)isFirstInit;
- (id)playModesArray;
- (id)startLayout;
- (unsigned long long)startScene;
- (BOOL)didStartBeforeEnterRoom;
- (void)setStartLayout:(id)arg0;
- (id)extra;
- (id)functionType;
- (int)uiLayout;

@end

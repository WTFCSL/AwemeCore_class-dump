//
//     Generated by private class-dump
//

@class AFDNonVideoInsertCompeteInfo, NSString;

@interface AFDNonVideoInsertCompeteManager : NSObject <AWEUserMessage, AFDNonVideoInsertCompeteManagerProtocol> {
    AFDNonVideoInsertCompeteInfo *_totalCompeteInfo;
    AFDNonVideoInsertCompeteInfo *_greetCompeteInfo;
}

@property (retain, nonatomic) AFDNonVideoInsertCompeteInfo *totalCompeteInfo;
@property (retain, nonatomic) AFDNonVideoInsertCompeteInfo *greetCompeteInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getRandomCompeteRatio;
+ (unsigned long long)randomGreetCardCompeteWithResultType:(unsigned long long)arg0;
+ (unsigned long long)randomCompeteWithCanInsertRecommendUser:(BOOL)arg0 canInsertRecommendGreet:(BOOL)arg1 canInsertContact:(BOOL)arg2;
+ (id)sharedInstance;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)markShowWithResult:(unsigned long long)arg0;
- (double)getCompeteRatio;
- (void)resetTempCount;
- (void)readCompeteDataFromStorage;
- (BOOL)refreshStoragedCountsIfNeeded;
- (void)setTotalCompeteInfo:(id)arg0;
- (void)setGreetCompeteInfo:(id)arg0;
- (id)totalCompeteInfo;
- (id)greetCompeteInfo;
- (unsigned long long)greetCardCompeteWithResultType:(unsigned long long)arg0;
- (id)p_selectFromEqualPriorityItems:(id)arg0;
- (id)infoWithCompeteResult:(unsigned long long)arg0;
- (void)markInsertWithResult:(unsigned long long)arg0;
- (unsigned long long)competeWithCanInsertRecommendUser:(BOOL)arg0 canInsertRecommendGreet:(BOOL)arg1 canInsertContact:(BOOL)arg2;
- (long long)competeAmongItems:(id)arg0;
- (void)markInsertWithResultBizType:(long long)arg0;
- (void).cxx_destruct;
- (void)clearData;
- (void)dealloc;

@end

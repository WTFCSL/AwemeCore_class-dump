//
//     Generated by private class-dump
//

@class NSString, AnimeInfo;

@interface BattleBarConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *leftColor;
@property (copy, nonatomic) NSString *rightColor;
@property (copy, nonatomic) NSString *leftScoreViewColor;
@property (copy, nonatomic) NSString *rightScoreViewColor;
@property (retain, nonatomic) AnimeInfo *animeInfo;
@property (nonatomic) BOOL hasAnimeInfo;

+ (id)descriptor;

@end
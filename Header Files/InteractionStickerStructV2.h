//
//     Generated by private class-dump
//

@class QuestionStickerStructV2, GrootInteractionStickerStructV2, VideoShareInfoStructV2, ReplyToCommentStructV2, PoiStructV2, FlashMobInfoStructV2, NSMutableArray, MusicStickerStructV2, MentionStickerStructV2, ScanInteractionStructV2, NSString, HashTagStickerStructV2, LiveShareInfoStructV2, TagInteractionStickerStructV2, LivePreviewStructV2, ReplyToAwemeStructV2, VoteStructV2, ImGroupStickerStructV2, AppointmentStickerStructV2;

@interface InteractionStickerStructV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int index;
@property (nonatomic) BOOL hasIndex;
@property (retain, nonatomic) PoiStructV2 *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (copy, nonatomic) NSString *trackInfo;
@property (nonatomic) BOOL hasTrackInfo;
@property (copy, nonatomic) NSString *attr;
@property (nonatomic) BOOL hasAttr;
@property (retain, nonatomic) VoteStructV2 *voteInfo;
@property (nonatomic) BOOL hasVoteInfo;
@property (copy, nonatomic) NSString *textInfo;
@property (nonatomic) BOOL hasTextInfo;
@property (retain, nonatomic) MentionStickerStructV2 *mentionInfo;
@property (nonatomic) BOOL hasMentionInfo;
@property (retain, nonatomic) HashTagStickerStructV2 *hashtagInfo;
@property (nonatomic) BOOL hasHashtagInfo;
@property (retain, nonatomic) LivePreviewStructV2 *livePreviewInfo;
@property (nonatomic) BOOL hasLivePreviewInfo;
@property (retain, nonatomic) NSMutableArray *textInteractionArray;
@property (readonly, nonatomic) unsigned long long textInteractionArray_Count;
@property (retain, nonatomic) VideoShareInfoStructV2 *videoShareInfo;
@property (nonatomic) BOOL hasVideoShareInfo;
@property (retain, nonatomic) GrootInteractionStickerStructV2 *grootInteraction;
@property (nonatomic) BOOL hasGrootInteraction;
@property (retain, nonatomic) ReplyToAwemeStructV2 *replyToAweme;
@property (nonatomic) BOOL hasReplyToAweme;
@property (retain, nonatomic) TagInteractionStickerStructV2 *tagInteraction;
@property (nonatomic) BOOL hasTagInteraction;
@property (nonatomic) int imageIndex;
@property (nonatomic) BOOL hasImageIndex;
@property (retain, nonatomic) ReplyToCommentStructV2 *replyToComment;
@property (nonatomic) BOOL hasReplyToComment;
@property (copy, nonatomic) NSString *stickerConfig;
@property (nonatomic) BOOL hasStickerConfig;
@property (retain, nonatomic) ScanInteractionStructV2 *scanInteraction;
@property (nonatomic) BOOL hasScanInteraction;
@property (retain, nonatomic) VideoShareInfoStructV2 *postShareInfo;
@property (nonatomic) BOOL hasPostShareInfo;
@property (retain, nonatomic) FlashMobInfoStructV2 *flashMobInfo;
@property (nonatomic) BOOL hasFlashMobInfo;
@property (retain, nonatomic) LiveShareInfoStructV2 *liveShareInfo;
@property (nonatomic) BOOL hasLiveShareInfo;
@property (retain, nonatomic) QuestionStickerStructV2 *questionInfo;
@property (nonatomic) BOOL hasQuestionInfo;
@property (nonatomic) int clipScope;
@property (nonatomic) BOOL hasClipScope;
@property (copy, nonatomic) NSString *clipKey;
@property (nonatomic) BOOL hasClipKey;
@property (retain, nonatomic) MusicStickerStructV2 *musicInfo;
@property (nonatomic) BOOL hasMusicInfo;
@property (retain, nonatomic) ImGroupStickerStructV2 *imGroupInfo;
@property (nonatomic) BOOL hasImGroupInfo;
@property (retain, nonatomic) AppointmentStickerStructV2 *appointmentInfo;
@property (nonatomic) BOOL hasAppointmentInfo;

+ (id)descriptor;

@end

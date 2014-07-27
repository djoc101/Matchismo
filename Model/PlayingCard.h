//
//  PlayingCard.h
//  Matchismo
//
//  Created by Don on 7/27/14.
//  Copyright (c) 2014 Drenocx. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
